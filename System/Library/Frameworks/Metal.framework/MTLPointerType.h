/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLType.h>

@interface MTLPointerType : MTLType

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long access; 
@property (readonly) unsigned long long alignment; 
@property (readonly) unsigned long long dataSize; 
@property (readonly) BOOL elementIsArgumentBuffer; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)elementStructType;
-(id)elementArrayType;
@end

