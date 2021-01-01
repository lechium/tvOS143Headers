/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_voucher;
@class NSThread, NSObject;

@interface __HMFThreadContext : HMFObject {

	BOOL _shouldRestoreVoucher;
	NSThread* _thread;
	unsigned long long _count;
	NSObject*<OS_voucher> _voucher;

}

@property (readonly) NSThread * thread;                                  //@synthesize thread=_thread - In the implementation block
@property (assign,nonatomic) unsigned long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSObject*<OS_voucher> voucher;              //@synthesize voucher=_voucher - In the implementation block
@property (assign,nonatomic) BOOL shouldRestoreVoucher;                  //@synthesize shouldRestoreVoucher=_shouldRestoreVoucher - In the implementation block
+(id)currentContext;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(NSThread *)thread;
-(NSObject*<OS_voucher>)voucher;
-(void)setVoucher:(NSObject*<OS_voucher>)arg1 ;
-(id)__init;
-(BOOL)shouldRestoreVoucher;
-(void)setShouldRestoreVoucher:(BOOL)arg1 ;
@end

