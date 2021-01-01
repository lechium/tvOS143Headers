/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CKDFetchRecordsOperation.h>

@class CKRecord;

@interface CKDGetUserRecordOperation : CKDFetchRecordsOperation {

	CKRecord* _userRecord;

}

@property (nonatomic,retain) CKRecord * userRecord;              //@synthesize userRecord=_userRecord - In the implementation block
-(void)main;
-(int)operationType;
-(id)analyticsPayload;
-(CKRecord *)userRecord;
-(void)setUserRecord:(CKRecord *)arg1 ;
-(void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2 ;
@end

