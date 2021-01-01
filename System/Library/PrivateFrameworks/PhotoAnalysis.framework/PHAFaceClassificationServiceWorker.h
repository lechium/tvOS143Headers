/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoAnalysis/PHAWorker.h>
#import <libobjc.A.dylib/PVVisionIntegrating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PHAAnalysisWorkerJob, PVVisionAnalyzer, VNPersonsModel, NSString;

@interface PHAFaceClassificationServiceWorker : PHAWorker <PVVisionIntegrating> {

	NSObject*<OS_dispatch_queue> _workerQueue;
	NSMutableArray* _pendingAssetIdentifiers;
	PHAAnalysisWorkerJob* _currentJob;
	PVVisionAnalyzer* _analyzer;
	VNPersonsModel* _personsModel;
	unsigned long long _numberOfAssetsToProcess;

}

@property (retain) PVVisionAnalyzer * analyzer;                             //@synthesize analyzer=_analyzer - In the implementation block
@property (retain) VNPersonsModel * personsModel;                           //@synthesize personsModel=_personsModel - In the implementation block
@property (assign) unsigned long long numberOfAssetsToProcess;              //@synthesize numberOfAssetsToProcess=_numberOfAssetsToProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(short)workerType;
+(long long)applicationDataFolderIdentifier;
+(BOOL)persistsState;
-(void)_cleanup;
-(PVVisionAnalyzer *)analyzer;
-(void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 ;
-(void)setAnalyzer:(PVVisionAnalyzer *)arg1 ;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(void)cooldown;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(void)processPendingAssetIdentifiers;
-(void)loadPersonsModel;
-(VNPersonsModel *)personsModel;
-(void)setPersonsModel:(VNPersonsModel *)arg1 ;
-(unsigned long long)numberOfAssetsToProcess;
-(void)setNumberOfAssetsToProcess:(unsigned long long)arg1 ;
@end

