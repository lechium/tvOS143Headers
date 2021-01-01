/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiskImages2/DiskImages2-Structs.h>
#import <DiskImages2/DiskImageParamsRaw_XPC.h>

@interface DiskImageParamsRAM_XPC : DiskImageParamsRaw_XPC
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)setBlockSize:(unsigned long long)arg1 ;
-(unique_ptr<DiskImage, std::__1::default_delete<DiskImage> >*)createDiskImage;
@end

