/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSData, NSString;

@interface VCPMAEmbeddingEntry : NSManagedObject

@property (nonatomic,retain) NSData * checksum; 
@property (assign,nonatomic) long long embeddingType; 
@property (assign,nonatomic) long long embeddingVersion; 
@property (nonatomic,retain) NSData * data; 
@property (assign,nonatomic) long long flags; 
@property (nonatomic,copy) NSString * localIdentifier; 
@property (assign,nonatomic) long long processed; 
@property (assign,nonatomic) long long random; 
+(id)fetchRequest;
@end

