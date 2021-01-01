/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FxFilter <FxBaseEffect>
@optional
-(unsigned long long)numberOfFramesToScheduleAtRenderTime:(/*function pointer*/void**)arg1;
-(void)schedule:(unsigned long long)arg1 frames:(/*function pointer*/void**)arg2 forRenderAtTime:(/*function pointer*/void**)arg3;

@required
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInput:(SCD_Struct_PA82)arg3 withInfo:(SCD_Struct_OZ102*)arg4;
-(BOOL)frameSetup:(SCD_Struct_OZ102*)arg1 inputInfo:(SCD_Struct_PA82)arg2 hardware:(BOOL*)arg3 software:(BOOL*)arg4;
-(BOOL)frameCleanup;
-(BOOL)renderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_OZ102*)arg3;

@end
