/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSString;

@interface FAEligiblityEvaluationRequest : FAFamilyCircleRequest {

	NSString* _propertyName;
	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * propertyName;              //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
-(NSString *)bundleID;
-(NSString *)propertyName;
-(id)initWithPropertyName:(id)arg1 bundleID:(id)arg2 ;
-(void)startRequestWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)fetchEligibilityWithError:(id*)arg1 ;
@end

