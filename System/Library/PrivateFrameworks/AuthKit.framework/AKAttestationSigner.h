/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AuthKit/AuthKit-Structs.h>
@class NSObject;

@interface AKAttestationSigner : NSObject {

	NSObject*<OS_dispatch_queue> _attestationQueue;

}
+(id)sharedSigner;
-(id)init;
-(id)_signatureForData:(id)arg1 withReferenceKey:(SecKeyRef)arg2 error:(id*)arg3 ;
-(id)_attestationWithCertificates:(id)arg1 error:(id*)arg2 ;
-(void)signatureForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signaturesForData:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

