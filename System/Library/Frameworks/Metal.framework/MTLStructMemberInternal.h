/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/MTLStructMember.h>

@class NSString, MTLType;

@interface MTLStructMemberInternal : MTLStructMember {

	NSString* _name;
	unsigned long long _offset;
	unsigned _dataType : 16;
	id _details;
	unsigned long long _argumentIndex;
	unsigned long long _render_target;
	unsigned long long _raster_order_group;
	MTLType* _typeInfo;

}

@property (readonly) unsigned long long render_target;                   //@synthesize render_target=_render_target - In the implementation block
@property (readonly) unsigned long long raster_order_group;              //@synthesize raster_order_group=_raster_order_group - In the implementation block
-(id)name;
-(void)dealloc;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)dataType;
-(id)structType;
-(id)arrayType;
-(id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 indirectArgumentIndex:(unsigned long long)arg4 render_target:(unsigned long long)arg5 raster_order_group:(unsigned long long)arg6 details:(id)arg7 ;
-(unsigned long long)indirectArgumentIndex;
-(id)dataTypeDescription;
-(id)indirectArgumentType;
-(unsigned long long)render_target;
-(unsigned long long)raster_order_group;
-(id)textureReferenceType;
-(id)pointerType;
-(unsigned long long)argumentIndex;
@end
