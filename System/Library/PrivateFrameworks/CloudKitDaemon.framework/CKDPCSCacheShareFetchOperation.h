/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKRecordID, CKDSharePCSData;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (nonatomic,readonly) CKRecordID * shareID; 
@property (nonatomic,retain) CKDSharePCSData * sharePCSData; 
-(CKRecordID *)shareID;
-(void)setSharePCSData:(CKDSharePCSData *)arg1 ;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(CKDSharePCSData *)sharePCSData;
-(id)itemTypeName;
-(BOOL)hasAllPCSData;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_decryptPCS;
-(BOOL)_savePCSDataToCache;
@end

