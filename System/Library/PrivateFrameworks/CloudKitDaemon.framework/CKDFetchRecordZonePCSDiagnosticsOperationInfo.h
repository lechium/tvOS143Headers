/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKDFetchRecordZonePCSDiagnosticsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _recordZoneIDs;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;              //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
@end

