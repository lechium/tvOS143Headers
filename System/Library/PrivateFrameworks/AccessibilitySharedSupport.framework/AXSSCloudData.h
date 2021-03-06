/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_transaction;
@class CKServerChangeToken, NSArray, NSObject;

@interface AXSSCloudData : NSObject {

	CKServerChangeToken* _serverChangeToken;
	NSArray* _recordsToUpdate;
	NSArray* _recordIDsToDelete;
	NSObject*<OS_os_transaction> _openTransaction;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;                   //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,retain) NSArray * recordsToUpdate;                                 //@synthesize recordsToUpdate=_recordsToUpdate - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                               //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> openTransaction;              //@synthesize openTransaction=_openTransaction - In the implementation block
-(NSArray *)recordIDsToDelete;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(NSObject*<OS_os_transaction>)openTransaction;
-(void)setOpenTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(NSArray *)recordsToUpdate;
-(void)setRecordsToUpdate:(NSArray *)arg1 ;
@end

