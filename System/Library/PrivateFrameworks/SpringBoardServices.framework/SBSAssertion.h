/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, BSMachPortReceiveRight;

@interface SBSAssertion : NSObject <BSInvalidatable> {

	NSString* _assertionName;
	NSString* _reason;
	BSMachPortReceiveRight* _receiveRight;

}

@property (nonatomic,copy,readonly) NSString * assertionName;              //@synthesize assertionName=_assertionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                     //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(NSString *)reason;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 receiveRight:(id)arg3 ;
-(id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned)arg3 ;
-(NSString *)assertionName;
@end

