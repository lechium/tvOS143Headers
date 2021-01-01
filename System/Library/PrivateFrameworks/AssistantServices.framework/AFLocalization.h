/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AFLocalization : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _tables;

}
+(id)sharedInstance;
-(id)init;
-(id)localizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3 languageCode:(id)arg4 ;
-(id)compactDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2 ;
-(id)longDisplayNameInLanguage:(id)arg1 forSiriLanguage:(id)arg2 ;
-(id)localizedNameOfOutputVoiceWithIdentifier:(id)arg1 inDisplayLanguage:(id)arg2 ;
-(id)localizedNameOfVoiceGender:(long long)arg1 inDisplayLanguage:(id)arg2 ;
-(id)localizedCompactNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2 ;
-(id)localizedNameForSiriLanguage:(id)arg1 inDisplayLanguage:(id)arg2 ;
-(id)localizedNameOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2 ;
-(id)localizedGenderOfOutputVoice:(id)arg1 inDisplayLanguage:(id)arg2 ;
-(id)allOutputVoiceIdentifiersForSiriLanguage:(id)arg1 ;
-(id)defaultOutputVoiceForSiriSessionLanguage:(id)arg1 ;
-(id)loadInfoForVoicesWithLanguageCode:(id)arg1 ;
@end
