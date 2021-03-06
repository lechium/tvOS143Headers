/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFAssertionContextMutating.h>

@class AFAssertionContext, NSString, NSDate, NSDictionary;

@interface _AFAssertionContextMutation : NSObject <AFAssertionContextMutating> {

	AFAssertionContext* _baseModel;
	unsigned long long _timestamp;
	NSString* _reason;
	NSDate* _effectiveDate;
	double _expirationDuration;
	NSDictionary* _userInfo;
	struct {
		unsigned isDirty : 1;
		unsigned hasTimestamp : 1;
		unsigned hasReason : 1;
		unsigned hasEffectiveDate : 1;
		unsigned hasExpirationDuration : 1;
		unsigned hasUserInfo : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setUserInfo:(id)arg1 ;
-(void)setReason:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)generate;
-(void)setEffectiveDate:(id)arg1 ;
-(void)setExpirationDuration:(double)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
@end

