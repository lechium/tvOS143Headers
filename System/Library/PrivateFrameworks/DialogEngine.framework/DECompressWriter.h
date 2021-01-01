/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@protocol DEWriter;
@class NSObject;

@interface DECompressWriter : NSObject <DEWriter> {

	BOOL _compressed;
	BOOL _streamInitialized;
	BOOL _streamEnded;
	NSObject*<DEWriter> _writer;
	z_stream_s* _stream;

}

@property (nonatomic,retain) NSObject*<DEWriter> writer;              //@synthesize writer=_writer - In the implementation block
@property (assign,nonatomic) z_stream_s* stream;                      //@synthesize stream=_stream - In the implementation block
@property (assign,nonatomic) BOOL streamInitialized;                  //@synthesize streamInitialized=_streamInitialized - In the implementation block
@property (assign,nonatomic) BOOL streamEnded;                        //@synthesize streamEnded=_streamEnded - In the implementation block
@property (assign,nonatomic) BOOL compressed;                         //@synthesize compressed=_compressed - In the implementation block
+(BOOL)isCompressed:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
-(z_stream_s*)stream;
-(void)setCompressed:(BOOL)arg1 ;
-(void)setStream:(z_stream_s*)arg1 ;
-(BOOL)compressed;
-(NSObject*<DEWriter>)writer;
-(void)setWriter:(NSObject*<DEWriter>)arg1 ;
-(id)initWithWriter:(id)arg1 ;
-(id)compress:(id)arg1 finalize:(BOOL)arg2 ;
-(BOOL)streamInitialized;
-(void)setStreamInitialized:(BOOL)arg1 ;
-(BOOL)streamEnded;
-(void)setStreamEnded:(BOOL)arg1 ;
@end

