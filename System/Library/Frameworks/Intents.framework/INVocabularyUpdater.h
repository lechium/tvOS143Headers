/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/_INVocabularyConnection.h>

@interface INVocabularyUpdater : _INVocabularyConnection
+(id)_sharedAppInstance;
+(void)clearAllCustomVocabulary;
-(void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 validationCompletion:(/*^block*/id)arg3 ;
-(void)setCustomPhotoAlbumNames:(id)arg1 ;
@end
