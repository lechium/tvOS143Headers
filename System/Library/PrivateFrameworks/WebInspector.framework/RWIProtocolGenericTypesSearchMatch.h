/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolGenericTypesSearchMatch : RWIProtocolJSONObject

@property (assign,nonatomic) double lineNumber; 
@property (nonatomic,copy) NSString * lineContent; 
-(double)lineNumber;
-(void)setLineNumber:(double)arg1 ;
-(void)setLineContent:(NSString *)arg1 ;
-(id)initWithLineNumber:(double)arg1 lineContent:(id)arg2 ;
-(NSString *)lineContent;
@end
