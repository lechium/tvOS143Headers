/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFChangeCaseIntentHandling.h>

@class NSString;

@interface WFChangeCaseIntentHandler : NSObject <WFChangeCaseIntentHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleChangeCase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveTextForChangeCase:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveTypeForChangeCase:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)stringByApplyingSentenceCaseToString:(id)arg1 withLocale:(id)arg2 ;
-(id)stringByApplyingTitleCaseToString:(id)arg1 ;
-(id)stringByApplyingAlternatingCaseToString:(id)arg1 ;
@end

