/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TKSmartCardUserInteractionDelegate;
@interface TKSmartCardUserInteraction : NSObject <NSSecureCoding> {

	id<TKSmartCardUserInteractionDelegate> _delegate;
	double _initialTimeout;
	double _interactionTimeout;

}

@property (__weak) id<TKSmartCardUserInteractionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) double initialTimeout;                                        //@synthesize initialTimeout=_initialTimeout - In the implementation block
@property (assign) double interactionTimeout;                                    //@synthesize interactionTimeout=_interactionTimeout - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<TKSmartCardUserInteractionDelegate>)delegate;
-(void)setDelegate:(id<TKSmartCardUserInteractionDelegate>)arg1 ;
-(BOOL)cancel;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(double)initialTimeout;
-(void)setInitialTimeout:(double)arg1 ;
-(double)interactionTimeout;
-(void)setInteractionTimeout:(double)arg1 ;
@end

