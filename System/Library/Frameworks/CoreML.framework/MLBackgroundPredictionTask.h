/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <CoreML/MLBackgroundTask.h>

@class NSURL, MLModelConfiguration, MLPredictionOptions;

@interface MLBackgroundPredictionTask : MLBackgroundTask {

	NSURL* _modelURL;
	MLModelConfiguration* _modelConfiguration;
	MLPredictionOptions* _predictionOptions;

}

@property (nonatomic,copy) NSURL * modelURL;                                       //@synthesize modelURL=_modelURL - In the implementation block
@property (nonatomic,copy) MLModelConfiguration * modelConfiguration;              //@synthesize modelConfiguration=_modelConfiguration - In the implementation block
@property (nonatomic,copy) MLPredictionOptions * predictionOptions;                //@synthesize predictionOptions=_predictionOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)taskRunnerClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)modelURL;
-(void)setModelURL:(NSURL *)arg1 ;
-(MLModelConfiguration *)modelConfiguration;
-(void)setModelConfiguration:(MLModelConfiguration *)arg1 ;
-(MLPredictionOptions *)predictionOptions;
-(void)setPredictionOptions:(MLPredictionOptions *)arg1 ;
@end

