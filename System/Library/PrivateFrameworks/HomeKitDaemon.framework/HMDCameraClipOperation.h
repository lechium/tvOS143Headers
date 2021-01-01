/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraClipOperationDataSource;
@class NSString, NSUUID, HMBLocalZone, HMDCameraRecordingUploadOperationEvent, NSDate, NSArray;

@interface HMDCameraClipOperation : HMFOperation <HMFObject, HMFLogging> {

	NSString* _logIdentifier;
	NSUUID* _clipModelID;
	HMBLocalZone* _localZone;
	HMDCameraRecordingUploadOperationEvent* _uploadOperationEvent;
	NSDate* _creationDate;
	NSDate* _startDate;
	NSDate* _endDate;
	id<HMDCameraClipOperationDataSource> _dataSource;

}

@property (copy,readonly) NSDate * creationDate;                                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                                              //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) double executionDuration; 
@property (copy) NSDate * startDate;                                                             //@synthesize startDate=_startDate - In the implementation block
@property (copy) NSDate * endDate;                                                               //@synthesize endDate=_endDate - In the implementation block
@property (readonly) id<HMDCameraClipOperationDataSource> dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSUUID * clipModelID;                                                       //@synthesize clipModelID=_clipModelID - In the implementation block
@property (readonly) HMBLocalZone * localZone;                                                   //@synthesize localZone=_localZone - In the implementation block
@property (readonly) HMDCameraRecordingUploadOperationEvent * uploadOperationEvent;              //@synthesize uploadOperationEvent=_uploadOperationEvent - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
-(NSString *)description;
-(NSDate *)creationDate;
-(void)main;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)finish;
-(NSString *)shortDescription;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(id<HMDCameraClipOperationDataSource>)dataSource;
-(NSString *)privateDescription;
-(NSString *)logIdentifier;
-(NSArray *)attributeDescriptions;
-(HMBLocalZone *)localZone;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 dataSource:(id)arg3 ;
-(NSUUID *)clipModelID;
-(void)_markEndDateAndSubmitUploadOperationEvent;
-(double)executionDuration;
-(id)updateClipModel:(id)arg1 shouldPerformDelegateCallbacks:(BOOL)arg2 ;
-(HMDCameraRecordingUploadOperationEvent *)uploadOperationEvent;
-(double)queuedDuration;
-(id)initWithClipModelID:(id)arg1 localZone:(id)arg2 ;
-(id)fetchClipModel;
-(id)updateClipModel:(id)arg1 ;
@end
