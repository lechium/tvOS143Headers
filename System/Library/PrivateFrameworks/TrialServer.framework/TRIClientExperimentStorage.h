/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TRIPaths;
@interface TRIClientExperimentStorage : NSObject {

	id<TRIPaths> _paths;

}
-(id)init;
-(id)initWithPaths:(id)arg1 ;
-(id)loadArtifactWithExperiment:(id)arg1 isFilePresent:(BOOL*)arg2 ;
-(id)_urlForExperiment:(id)arg1 ;
-(BOOL)saveArtifact:(id)arg1 ;
-(BOOL)removeArtifactWithExperiment:(id)arg1 ;
@end

