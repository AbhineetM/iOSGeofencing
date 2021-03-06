/**
 Copyright (c) 2011, Praveen K Jha, Praveen K Jha.
 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:

 Redistributions of source code must retain the above copyright notice, this list
 of conditions and the following disclaimer.
 Redistributions in binary form must reproduce the above copyright notice, this
 list of conditions and the following disclaimer in the documentation and/or other
 materials provided with the distribution.
 Neither the name of the Praveen K Jha. nor the names of its contributors may be
 used to endorse or promote products derived from this software without specific
 prior written permission.
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 OF THE POSSIBILITY OF SUCH DAMAGE."
 **/
//
//  Helper.h
//  POISearch
//
//  Created by Rajesh Dongre on 23/05/11.
//  Copyright 2011 Praveen K Jha Nagpur. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/CALayer.h>
#import "Defines.h"

@interface Helper : NSObject {

}
+ (NSString*) getCurrentDate;
+ (void)showAlert:(NSString *)title message:(NSString *)message okButton:(BOOL)value withDelegate:(id)delegate;
+ (void)showAlert:(NSString *)title message:(NSString *)message cancelButtonTitle:(NSString *)cancelTitle otherButtonTitle:(NSString *)otherTitle withDelegate:(id)delegate;
+ (void)dismissAlert;
+ (UIInterfaceOrientation)currentOrientation;
+ (BOOL)is3GSAndAboveDevice;
+ (NSString *)getTrimmedString:(NSString *)string;
+ (NSString *)getStringByEscapingLineCharacter:(NSString *)string;
+ (NSString *)getStringByEscapingBreak:(NSString *)string;
//Get the thumbnail image of specified size.
+ (UIImage *)thumbWithSideOfLength:(float)length withImageData:(NSData *)imageData;
+ (UIImage *)thumbWithWidth:(float)width withHeight:(float)height withImageData:(NSData *)imageData;

+ (NSString *)getNIBName:(NIBFileNameType)type;
+ (NSString *)getPlainTextFromRichText:(NSString *)richText;
@end
