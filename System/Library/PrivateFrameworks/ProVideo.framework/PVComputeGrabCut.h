/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface PVComputeGrabCut : NSObject {

	HFGrabCutInterface* _module;

}
-(id)init;
-(void)dealloc;
-(void)reset;
-(BOOL)processImage:(id)arg1 trimap:(id)arg2 roi:(CGRect)arg3 clusters:(int)arg4 gamma:(float)arg5 iterations:(int)arg6 mask:(id)arg7 ;
@end

