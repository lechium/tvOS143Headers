/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying> {

	NSString* _sinkID;

}

@property (nonatomic,copy) NSString * sinkID;                       //@synthesize sinkID=_sinkID - In the implementation block
@property (nonatomic,readonly) int sinkType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringForSinkType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)sinkID;
-(void)setSinkID:(NSString *)arg1 ;
-(int)sinkType;
@end

