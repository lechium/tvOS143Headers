/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface CLSEICategory : NSManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSSet * subCategories; 
@property (nonatomic,retain) CLSEICategory * parentCategory; 
@property (nonatomic,retain) NSSet * events; 
@end
