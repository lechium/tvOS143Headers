/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/PFCloudKitBaseMetric.h>

@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {

	NSNumber* _sizeInBytes;

}

@property (nonatomic,readonly) NSNumber * sizeInBytes;              //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
-(void)dealloc;
-(id)payload;
-(NSNumber *)sizeInBytes;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)addByteSize:(unsigned long long)arg1 ;
@end

