/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _purgedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * purgedRecordZoneID;              //@synthesize purgedRecordZoneID=_purgedRecordZoneID - In the implementation block
-(id)description;
-(void)dealloc;
-(void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(BOOL)wipeAllCloudDataFromStore:(id)arg1 andPurgeHistoryToken:(BOOL)arg2 error:(id*)arg3 ;
-(CKRecordZoneID *)purgedRecordZoneID;
@end

