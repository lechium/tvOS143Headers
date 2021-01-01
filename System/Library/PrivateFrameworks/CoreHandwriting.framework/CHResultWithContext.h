/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, CHMutableTokenizedTextResult;

@interface CHResultWithContext : NSObject {

	int _contentType;
	NSString* _leftContext;
	CHMutableTokenizedTextResult* _result;

}

@property (nonatomic,retain) NSString * leftContext;                             //@synthesize leftContext=_leftContext - In the implementation block
@property (assign) int contentType;                                              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) CHMutableTokenizedTextResult * result;              //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(CHMutableTokenizedTextResult *)result;
-(int)contentType;
-(void)setContentType:(int)arg1 ;
-(void)setResult:(CHMutableTokenizedTextResult *)arg1 ;
-(id)initWithResult:(id)arg1 leftContext:(id)arg2 contentType:(int)arg3 ;
-(NSString *)leftContext;
-(void)setLeftContext:(NSString *)arg1 ;
@end

