/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CNCancelable;
@class CNSuspendableSchedulerDecorator;

@interface _CNFlatMapInnerSubscriptionContext : NSObject {

	CNSuspendableSchedulerDecorator* _decorator;
	id<CNCancelable> _token;

}

@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * decorator;              //@synthesize decorator=_decorator - In the implementation block
@property (nonatomic,readonly) id<CNCancelable> token;                                   //@synthesize token=_token - In the implementation block
-(id<CNCancelable>)token;
-(id)initWithDecorator:(id)arg1 token:(id)arg2 ;
-(CNSuspendableSchedulerDecorator *)decorator;
@end
