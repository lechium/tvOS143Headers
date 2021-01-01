/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineInitialQueryTracker : CPLEngineStorage <CPLAbstractObject>

@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)scopeType;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(BOOL)recordInitialQueryForClassStarted:(Class)arg1 scope:(id)arg2 cursor:(id)arg3 error:(id*)arg4 ;
-(BOOL)recordQueryBatchForClass:(Class)arg1 scope:(id)arg2 cursor:(id)arg3 count:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)recordInitialQueryForClassFinished:(Class)arg1 scope:(id)arg2 finishedState:(long long)arg3 error:(id*)arg4 ;
@end
