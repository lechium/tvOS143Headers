/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDictionary;


@protocol VUIJSAMSBagDelegate <JSExport>
@property (nonatomic,readonly) NSDictionary * VUIAMSBagValueTypes; 
@required
-(id)boolForKey:(id)arg1;
-(id)integerForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(id)dictionaryForKey:(id)arg1;
-(id)doubleForKey:(id)arg1;
-(id)URLForKey:(id)arg1;
-(void)registerBagKey:(id)arg1 withValueType:(unsigned long long)arg2;
-(void)arrayForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)boolForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)doubleForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)integerForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)stringForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)URLForKeyWithCompletion:(id)arg1 :(id)arg2;
-(void)dictionaryForKeyWithCompletion:(id)arg1 :(id)arg2;
-(NSDictionary *)VUIAMSBagValueTypes;

@end

