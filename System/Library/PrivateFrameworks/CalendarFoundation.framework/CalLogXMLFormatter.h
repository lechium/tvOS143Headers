/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalLogFormatter.h>

@class NSString;

@interface CalLogXMLFormatter : NSObject <CalLogFormatter> {

	BOOL _shouldPrettyPrint;
	BOOL _useTinyElementNames;

}

@property (assign,nonatomic) BOOL shouldPrettyPrint;                //@synthesize shouldPrettyPrint=_shouldPrettyPrint - In the implementation block
@property (assign,nonatomic) BOOL useTinyElementNames;              //@synthesize useTinyElementNames=_useTinyElementNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)newFormattedString:(id)arg1 ;
-(BOOL)shouldPrettyPrint;
-(void)setShouldPrettyPrint:(BOOL)arg1 ;
-(BOOL)useTinyElementNames;
-(void)setUseTinyElementNames:(BOOL)arg1 ;
@end

