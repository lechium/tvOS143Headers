/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ProVideo/ProVideo-Structs.h>
@interface FxPlugGroup : NSObject {

	FxPlugGroupPriv* _priv;

}
+(id)fxPlugGroupWithDescriptor:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)descriptor;
-(id)initWithDescriptor:(id)arg1 ;
-(void)addFxPlugDescriptor:(id)arg1 ;
-(id)fxPlugDescriptorAtIndex:(int)arg1 ;
@end
