/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Espresso/Espresso-Structs.h>
@interface ETDataPointDictionary : NSObject {

	map<std::__1::basic_string<char>, vImage_Buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, vImage_Buffer> > >* _image_buffers;
	map<std::__1::basic_string<char>, float_buffer_t, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float_buffer_t> > >* _float_buffers;

}

@property (assign) map<std::__1::basic_string<char> image_buffers;              //@synthesize image_buffers=_image_buffers - In the implementation block
@property (assign) map<std::__1::basic_string<char> float_buffers;              //@synthesize float_buffers=_float_buffers - In the implementation block
-(map<std::__1::basic_string<char>)image_buffers;
-(BOOL)setImage:(vImage_Buffer*)arg1 forKey:(id)arg2 ;
-(BOOL)setData:(float*)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(BOOL)arg4 ;
-(float*)dataForKey:(id)arg1 error:(id*)arg2 ;
-(id)dataArrayForKey:(id)arg1 error:(id*)arg2 ;
-(void)setImage_buffers:(map<std::__1::basic_string<char>)arg1 ;
-(map<std::__1::basic_string<char>)float_buffers;
-(void)setFloat_buffers:(map<std::__1::basic_string<char>)arg1 ;
@end

