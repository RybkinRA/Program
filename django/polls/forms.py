from django import forms
from django.core.validators import RegexValidator

# class complexField(forms.MultiValueField):
#     def __init__(self):
#         fields = (forms.IntegerField(),forms.IntegerField())

class ComplexField(forms.MultiValueField):
    def __init__(self, **kwargs):
        # Define one message for all fields.
        error_messages = {
            'incomplete': 'Enter a country calling code and a phone number.',
        }
        # Or define a different message for each field.
        fields = (
            forms.CharField(
                error_messages={'incomplete': 'Enter a country calling code.'},
                validators=[
                    RegexValidator(r'^[0-9]+$', 'Enter a valid country calling code.'),
                ],
            ),
            forms.CharField(
                error_messages={'incomplete': 'Enter a phone number.'},
                validators=[RegexValidator(r'^[0-9]+$', 'Enter a valid phone number.')],
            ),
            forms.CharField(
                validators=[RegexValidator(r'^[0-9]+$', 'Enter a valid extension.')],
                required=False,
            ),
        )
        super().__init__(
            error_messages=error_messages, fields=fields,
            require_all_fields=False, **kwargs
        )

class MyForm(forms.Form):
    p11 = forms.EmailField()
    p12 = forms.IntegerField()
    p13 = forms.IntegerField()
    # p21 = forms.IntegerField()
    # p22 = forms.IntegerField()
    # p23 = forms.IntegerField()
    # p31 = forms.IntegerField()
    # p32 = forms.IntegerField()
    # p33 = forms.IntegerField()
    # sep = forms.IntegerField()
    f = ComplexField()