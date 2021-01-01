/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Metal/Metal-Structs.h>
@interface _MTLIndirectDispatchThreadgroupsArguments : NSObject {

	SCD_Struct_MT17 _threadgroupsPerGrid;
	SCD_Struct_MT17 _threadsPerThreadgroup;

}

@property (assign,nonatomic) SCD_Struct_MT17 threadgroupsPerGrid;                //@synthesize threadgroupsPerGrid=_threadgroupsPerGrid - In the implementation block
@property (assign,nonatomic) SCD_Struct_MT17 threadsPerThreadgroup;              //@synthesize threadsPerThreadgroup=_threadsPerThreadgroup - In the implementation block
-(SCD_Struct_MT17)threadgroupsPerGrid;
-(void)setThreadgroupsPerGrid:(SCD_Struct_MT17)arg1 ;
-(SCD_Struct_MT17)threadsPerThreadgroup;
-(void)setThreadsPerThreadgroup:(SCD_Struct_MT17)arg1 ;
@end
