/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IOAccelMemoryInfo.framework/IOAccelMemoryInfo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface IOAccelMemoryMapInfo : NSObject {

	int pid;
	unsigned long long address;
	id _expansionData;

}

@property (assign) int pid; 
@property (assign) unsigned long long address; 
-(unsigned long long)address;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setAddress:(unsigned long long)arg1 ;
@end

