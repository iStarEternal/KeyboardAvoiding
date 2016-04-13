//
//  KeyboardAvoidingTableView.h
//  KeyboardAvoiding
//
//  Created by Zhu Shengqi on 4/13/16.
//  Copyright © 2016 dia. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "UIScrollView+KeyboardAvoidingAdditions.h"

@interface KeyboardAvoidingTableView : UITableView <UITextFieldDelegate, UITextViewDelegate>
- (BOOL)focusNextTextField;
- (void)scrollToActiveTextField;
@end
