from django.db import models
from pygments import highlight


LANGUAGE_CHOICES = (
    ('python', 'Python'),
    ('javascript', 'JavaScript'),
    ('ruby', 'Ruby'),
    # Add more languages as needed
)

STYLE_CHOICES = (
    ('friendly', 'Friendly'),
    ('monokai', 'Monokai'),
    ('native', 'Native'),
    # Add more styles as needed
)
class Snippet(models.Model):
    created = models.DateTimeField(auto_now_add=True)
    title = models.CharField(max_length=100, blank=True, default="")
    code = models.TextField()
    lineos = models.BooleanField(default=False)
    language = models.CharField(
        choices=LANGUAGE_CHOICES, default="python", max_length=100
    )
    style = models.CharField(choices=STYLE_CHOICES, default="friendly", max_length=100)
    owner = models.ForeignKey(
        "auth.User", related_name="snippets", on_delete=models.CASCADE
    )
    highlighted = models.TextField()

    class Meta:
        ordering = ("created",)


