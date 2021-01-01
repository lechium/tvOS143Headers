/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CRLanguageResourcesManager : NSObject {

	NSMutableDictionary* _languageResourceStacks;

}

@property (retain) NSMutableDictionary * languageResourceStacks;              //@synthesize languageResourceStacks=_languageResourceStacks - In the implementation block
+(id)sharedManager;
-(void)addSubscriber:(id)arg1 forLocale:(id)arg2 ;
-(void)removeSubscriber:(id)arg1 forLocale:(id)arg2 ;
-(BOOL)lockResourcesForLocale:(id)arg1 sender:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)setLanguageResourceStacks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)languageResourceStacks;
@end

