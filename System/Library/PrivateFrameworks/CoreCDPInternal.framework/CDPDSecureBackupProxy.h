/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CDPContext;


@protocol CDPDSecureBackupProxy <NSObject>
@property (nonatomic,retain) CDPContext * cdpContext; 
@required
-(id)initWithContext:(id)arg1;
-(CDPContext *)cdpContext;
-(void)disableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)enableWithInfo:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(id)accountInfoWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)disableWithInfo:(id)arg1 error:(id*)arg2;
-(BOOL)enableWithInfo:(id)arg1 error:(id*)arg2;
-(id)recoverWithInfo:(id)arg1 error:(id*)arg2;
-(void)cacheRecoveryKey:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)uncacheAllSecrets;
-(void)setCdpContext:(id)arg1;

@end
