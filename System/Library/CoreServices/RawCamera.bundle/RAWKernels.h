/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <RawCamera/RawCamera-Structs.h>
@class NSMutableDictionary;

@interface RAWKernels : NSObject {

	NSMutableDictionary* priv;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)kernelWithName:(id)arg1 ;
+(id)sharedKernels;
+(id)kernelWithName:(id)arg1 group:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)kernelSourceForGroup:(id)arg1 ;
-(id)loadKernelsForGroup:(id)arg1 ;
-(id)kernelWithName:(id)arg1 group:(id)arg2 ;
@end

