from rest_framework import serializers
from .models import Snippet

class SnippetSerializer(serializers.HyperlinkedModelSerializer):
    
    class Meta:
        model = Snippet
        fields = (
            "id",
            "title",
            "code",
            "lineos",
            "language",
            "style",
        )
