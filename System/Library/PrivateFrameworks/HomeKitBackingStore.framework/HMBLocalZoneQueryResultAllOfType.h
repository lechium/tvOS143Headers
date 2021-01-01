/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBLocalZoneQueryResultRecordColumns.h>

@class NSString;

@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns {

	int _modelClassNameOffset;
	NSString* _modelClassName;

}

@property (nonatomic,readonly) int modelClassNameOffset;               //@synthesize modelClassNameOffset=_modelClassNameOffset - In the implementation block
@property (nonatomic,readonly) NSString * modelClassName;              //@synthesize modelClassName=_modelClassName - In the implementation block
-(BOOL)bindPropertiesToStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(int)modelClassNameOffset;
-(NSString *)modelClassName;
-(id)initWithLocalZone:(id)arg1 modelClassName:(id)arg2 ;
@end
