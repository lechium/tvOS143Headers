/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MDLMeshBufferMap : NSObject {

	/*^block*/id _deallocator;
	void* _bytes;

}

@property (nonatomic,readonly) void* bytes;              //@synthesize bytes=_bytes - In the implementation block
-(void)dealloc;
-(void*)bytes;
-(id)initWithBytes:(void*)arg1 deallocator:(/*^block*/id)arg2 ;
@end

