/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentSession.h>

@interface PKApplePayTrustSession : PKPaymentSession
-(id)keyWithIdentifier:(id)arg1 ;
-(BOOL)deleteKeyWithIdentifier:(id)arg1 ;
-(id)createKeyWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)signatureForRequest:(id)arg1 withAuthorization:(id)arg2 ;
@end

