/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMICameraVideoFrameAnalyzer <NSObject>
@required
+(id)classHierarchyMap;
-(id)init;
-(void)preAnalyze:(id)arg1;
-(void)handleMotionDetection:(id)arg1 sessionPTS:(SCD_Struct_HM3)arg2 frameDimensions:(CGSize)arg3 sessionIdentifier:(id)arg4;
-(id)analyze:(id)arg1 targetEventTypes:(long long)arg2 enableFaceClassification:(BOOL)arg3 sessionIdentifier:(id)arg4 homeUUID:(id)arg5 error:(id*)arg6;
-(id)initWithMediumConfidenceThresholds:(id)arg1 highConfidenceThresholds:(id)arg2 nmsConfiguration:(id)arg3 assetPath:(id)arg4 error:(id*)arg5;

@end

