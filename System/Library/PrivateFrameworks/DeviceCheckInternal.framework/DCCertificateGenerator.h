/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, DCContext;

@interface DCCertificateGenerator : NSObject {

	NSData* _publicKey;
	DCContext* _context;

}
-(void)dealloc;
-(id)initWithContext:(id)arg1 publicKey:(id)arg2 ;
-(void)generateEncryptedCertificateChainWithCompletion:(/*^block*/id)arg1 ;
-(id)_encryptData:(id)arg1 serverSyncedDate:(id)arg2 error:(id*)arg3 ;
-(void)_generateCertificateChainWithCompletion:(/*^block*/id)arg1 ;
-(unsigned)generateTTL;
-(BOOL)_isNSDate:(id)arg1 ;
-(int)keybagHandle;
@end
