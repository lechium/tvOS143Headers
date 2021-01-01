/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ProbeManagerDelegate <NSObject>
@optional
-(void)probeStatusUpdate:(id)arg1;
-(void)probeOutputFilePaths:(id)arg1 forDiagSessionUUID:(id)arg2;
-(void)serviceAdded:(id)arg1 type:(long long)arg2;
-(void)serviceUpdated:(id)arg1 type:(long long)arg2;
-(void)serviceRemoved:(id)arg1 type:(long long)arg2;
-(void)probeFactString:(id)arg1 module:(id)arg2 goIntoDiagnosing:(BOOL)arg3 run:(BOOL)arg4;

@end

