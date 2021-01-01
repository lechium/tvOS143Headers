/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentInformationEventExtensionBaseContext.h>
#import <libobjc.A.dylib/PKPaymentInformationEventExtensionHostContextProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface PKPaymentInformationEventExtensionHostContext : PKPaymentInformationEventExtensionBaseContext <PKPaymentInformationEventExtensionHostContextProtocol> {

	NSObject*<OS_dispatch_queue> _queue;

}
-(id)replyQueue;
-(id)vendorContext;
-(id)vendorContextWithErrorHandler:(/*^block*/id)arg1 ;
-(void)handleInformationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleSignatureRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleConfigurationRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

