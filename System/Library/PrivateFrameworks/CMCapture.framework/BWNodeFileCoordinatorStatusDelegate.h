/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWNodeFileCoordinatorStatusDelegate <NSObject>
@required
-(void)fileCoordinator:(id)arg1 sentMarkerBufferForFileWriterAction:(id)arg2 withPTS:(SCD_Struct_BW7)arg3 settingsID:(long long)arg4 errorCode:(int)arg5;
-(void)fileCoordinator:(id)arg1 stoppedBeforeStartedRecordingForSettings:(id)arg2 pendingIrisMovieInfos:(id)arg3 errorCode:(int)arg4;

@end

